/*
FUNCTION_NAME: System.Linq.Enumerable.WhereSelectArrayIterator<Int32Enum,-Vector4>$$Clone
ENTRY_POINT: 0284a91c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0284ab10) */

void System_Linq_Enumerable_WhereSelectArrayIterator<Int32Enum,_Vector4>__Clone(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  *(undefined1 *)(unaff_x21 + 0x874) = 1;
  plVar4 = (long *)FUN_02249438(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = (**(code **)(*plVar4 + 0x1b8))
                    ((int)unaff_x20[0x7e],*(undefined4 *)((long)unaff_x20 + 0x3f4),
                     (int)unaff_x20[0x7f],*(undefined4 *)((long)unaff_x20 + 0x3fc),plVar4,
                     *(undefined8 *)(*plVar4 + 0x1c0));
  if ((uVar5 & 1) == 0) {
    lVar6 = FUN_04224ea4();
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0284aacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x20 + 0x838))();
      return;
    }
    lVar6 = unaff_x20[0x7e];
    uVar13 = *(undefined4 *)((long)unaff_x20 + 0x3f4);
    lVar1 = unaff_x20[0x7f];
    uVar12 = *(undefined4 *)((long)unaff_x20 + 0x3fc);
    (**(code **)(*unaff_x20 + 0x838))();
    lVar2 = unaff_x20[0x7e];
    uVar10 = *(undefined4 *)((long)unaff_x20 + 0x3f4);
    lVar3 = unaff_x20[0x7f];
    uVar11 = *(undefined4 *)((long)unaff_x20 + 0x3fc);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_029e60f0((int)lVar6,uVar13,(int)lVar1,uVar12,(int)lVar2,uVar10,(int)lVar3,
                                  uVar11,*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar4);
    (**(code **)(*unaff_x20 + 0x198))();
    lVar6 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0284aadc;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0284aadc:
    (*(code *)*puVar8)(plVar4,puVar8[1]);
  }
  return;
}


