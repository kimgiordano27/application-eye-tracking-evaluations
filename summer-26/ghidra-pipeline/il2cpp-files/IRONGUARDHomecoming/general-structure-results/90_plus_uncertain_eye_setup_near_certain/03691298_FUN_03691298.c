/*
FUNCTION_NAME: FUN_03691298
ENTRY_POINT: 03691298
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_14
*/


/* WARNING: Removing unreachable block (ram,0x0369157c) */

void FUN_03691298(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
                    /* try { // try from 036912a4 to 037912bb has its CatchHandler @ 03691334 */
  if ((DAT_04833ec3 & 1) == 0) {
                    /* try { // try from 036912bc to 03791323 has its CatchHandler @ 036911fc */
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_53__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_54__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_55__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_56__);
    DAT_04833ec3 = 1;
  }
  if ((char)param_1[8] == '\0') {
    return;
  }
  plVar11 = (long *)param_1[5];
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *plVar11;
                    /* try { // try from 03691324 to 03791333 has its CatchHandler @ 03691334 */
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 03691270 with catch @ 03691334
                       catch() { ... } // from try @ 036912a4 with catch @ 03691334
                       catch() { ... } // from try @ 03691324 with catch @ 03691334 */
                    /* try { // try from 03691338 to 0379133b has its CatchHandler @ 03691344 */
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
                    /* try { // try from 0369133c to 03791347 has its CatchHandler @ 036911fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03691338 with catch @ 03691344
                        */
      if (*(long *)(piVar10 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__653_54__) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03691370;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)Method_OVRPlugin_<>c_<_cctor>b__653_54__,0);
LAB_03691370:
  plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__653_56__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__653_55__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_53__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036913f0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_036913f0:
    uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03691528;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0369144c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_0369144c:
    plVar6 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02ab0644(uVar7,param_1,*(undefined8 *)(*param_1 + 0x180),0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_036914d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,1);
LAB_036914d4:
    (*(code *)*puVar5)(plVar6,uVar7,puVar5[1]);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03691544;
    }
  }
LAB_03691528:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar11,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03691544:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
  return;
}


