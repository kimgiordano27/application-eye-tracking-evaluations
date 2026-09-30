/*
FUNCTION_NAME: Unity.Properties.ContainerPropertyBag<Vector3Int>$$.ctor
ENTRY_POINT: 0296eaf0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0296ec6c) */

void Unity_Properties_ContainerPropertyBag<Vector3Int>___ctor(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xe00));
  *(undefined1 *)(unaff_x21 + 0xc90) = 1;
  if (unaff_x20 == (long *)0x0) {
LAB_0296ec64:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0422b6c0();
  if (unaff_x20[0x7d] != 0) {
    FUN_0422b208();
    lVar6 = unaff_x20[0x7e];
    FUN_0422b27c();
    plVar1 = (long *)FUN_0249b278(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
    if (plVar1 == (long *)0x0) goto LAB_0296ec64;
    uVar2 = (**(code **)(*plVar1 + 0x1b8))
                      (plVar1,lVar6,unaff_x20[0x7e],*(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) == 0) {
      lVar7 = unaff_x20[0x7e];
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar1 = (long *)FUN_029e6d38(lVar6,lVar7,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar1);
      (**(code **)(*unaff_x20 + 0x838))();
      (**(code **)(*unaff_x20 + 0x198))();
      lVar6 = *plVar1;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0296ec44;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar1,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0296ec44:
      (*(code *)*puVar4)(plVar1,puVar4[1]);
    }
  }
  return;
}


