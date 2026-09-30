/*
FUNCTION_NAME: FUN_0367961c
ENTRY_POINT: 0367961c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03679a00) */

void FUN_0367961c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  
  puVar2 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_34__;
  puVar1 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_22__;
  if ((DAT_04833df4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_35__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_36__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_37__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_38__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_39__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_4__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_34__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_22__);
    DAT_04833df4 = 1;
  }
  FUN_035fd964(param_1,param_1 + 0x7e,0,0);
  plVar7 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_030bc828(plVar7,*(undefined8 *)puVar2);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (plVar13 = *(long **)(*(long *)(param_1 + 0x38) + 0x10), plVar13 != (long *)0x0)) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_38__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03679764;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar13,*(long *)
                                   Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_38__
                          ,0);
LAB_03679764:
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar13 = (long *)(*(code *)*puVar8)(plVar13,puVar8[1]);
    puVar5 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_39__;
    puVar4 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_37__;
    puVar3 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_35__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_036797ec;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_036797ec:
      uVar11 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar13 == (long *)0x0) goto LAB_0367994c;
        lVar9 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto OVRPassthroughLayer__IsUserDefinedAndDoesNotContainSurfaceGeometry;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_0367990c;
      }
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03679848;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar5,0);
LAB_03679848:
      lVar9 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *plVar7;
      uVar6 = *(undefined4 *)(lVar9 + 0x14);
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_036798b4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,2);
LAB_036798b4:
      (*(code *)*puVar8)(plVar7,uVar6,puVar8[1]);
      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02ba591c(0,0,0,0,*(long *)(param_1 + 0x50),lVar9,*(undefined8 *)puVar3);
    } while( true );
  }
  goto LAB_036799f8;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0367990c:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03679940;
    }
  }
OVRPassthroughLayer__IsUserDefinedAndDoesNotContainSurfaceGeometry:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar1,0);
LAB_03679940:
  (*(code *)*puVar8)(plVar13,puVar8[1]);
LAB_0367994c:
  puVar1 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_4__;
  uVar6 = FUN_04076320(param_1,0);
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar9,0);
  *(undefined4 *)(lVar9 + 0x10) = uVar6;
  *(long *)(lVar9 + 0x18) = (long)plVar7;
  thunk_FUN_01f51358((long *)(lVar9 + 0x18),plVar7);
  *(long *)(param_1 + 0x58) = lVar9;
  thunk_FUN_01f51358((long *)(param_1 + 0x58),lVar9);
  lVar9 = *(long *)(param_1 + 0x68);
  if (lVar9 != 0) {
    uVar6 = (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
    ;
    *(undefined4 *)(param_1 + 0x78) = uVar6;
    FUN_035fd9d8(param_1,param_1 + 0x7e,0);
    return;
  }
LAB_036799f8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


