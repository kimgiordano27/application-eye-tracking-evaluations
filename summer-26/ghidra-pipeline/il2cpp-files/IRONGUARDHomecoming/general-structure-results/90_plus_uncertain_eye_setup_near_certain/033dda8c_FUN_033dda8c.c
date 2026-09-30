/*
FUNCTION_NAME: FUN_033dda8c
ENTRY_POINT: 033dda8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033ddc00) */

long FUN_033dda8c(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  
  if ((DAT_04832546 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04832546 = 1;
  }
  if (param_2 != 0) {
    uVar2 = FUN_033ddf20(param_1,param_2);
    if ((uVar2 & 1) != 0) {
      return param_2;
    }
    lVar3 = FUN_033dd3a8(param_1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = FUN_033d442c();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      uVar2 = FUN_033d485c(lVar3);
      if ((uVar2 & 1) == 0) {
        lVar4 = 0;
        iVar8 = 7;
        goto LAB_033ddb34;
      }
      lVar4 = FUN_033d4484(lVar3);
      uVar2 = FUN_033ddcd4(param_1,param_2,lVar4);
    } while ((uVar2 & 1) == 0);
    iVar8 = 6;
LAB_033ddb34:
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar5 = (long *)thunk_FUN_01f116d0(lVar3,*(undefined8 *)
                                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_033ddb9c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_033ddb9c:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    if ((iVar8 != 7) && (iVar8 != 0)) {
      return lVar4;
    }
    uVar2 = FUN_033dcb30(param_2);
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x20;
      return param_2;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0x10000;
  return 0;
}


