/*
FUNCTION_NAME: OVRPassthroughLayer.BaseGeneratedStyleHandler$$ComputeBrightnessContrastPosterizeMap
ENTRY_POINT: 0367af58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 210
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0367b334) */

void OVRPassthroughLayer_BaseGeneratedStyleHandler__ComputeBrightnessContrastPosterizeMap
               (long param_1)

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
  if ((DAT_04833dfe & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_46__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_36__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_37__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_47__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_48__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_4__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_34__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_22__);
    DAT_04833dfe = 1;
  }
  FUN_035fd964(param_1,param_1 + 0x8e,0,0);
  plVar7 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_030bc828(plVar7,*(undefined8 *)puVar2);
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (plVar13 = *(long **)(*(long *)(param_1 + 0x50) + 0x10), plVar13 != (long *)0x0)) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_47__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0367b098;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar13,*(long *)
                                   Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_47__
                          ,0);
LAB_0367b098:
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar13 = (long *)(*(code *)*puVar8)(plVar13,puVar8[1]);
    puVar5 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_48__;
    puVar4 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_46__;
    puVar3 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_37__;
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
            goto LAB_0367b120;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_0367b120:
      uVar11 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar13 == (long *)0x0) goto LAB_0367b280;
        lVar9 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_0367b258;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_0367b240;
      }
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0367b17c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar5,0);
LAB_0367b17c:
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
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_0367b1e8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,2);
LAB_0367b1e8:
      (*(code *)*puVar8)(plVar7,uVar6,puVar8[1]);
      if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02ba8760(0,0,0,0,*(long *)(param_1 + 0x68),lVar9,*(undefined8 *)puVar4);
    } while( true );
  }
  goto LAB_0367b32c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0367b240:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto OVRPassthroughLayer_BCSStyleHandler__Update;
    }
  }
LAB_0367b258:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar1,0);
OVRPassthroughLayer_BCSStyleHandler__Update:
  (*(code *)*puVar8)(plVar13,puVar8[1]);
LAB_0367b280:
  puVar1 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_4__;
  uVar6 = FUN_04076320(param_1,0);
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar9,0);
  *(undefined4 *)(lVar9 + 0x10) = uVar6;
  *(long *)(lVar9 + 0x18) = (long)plVar7;
  thunk_FUN_01f51358((long *)(lVar9 + 0x18),plVar7);
  *(long *)(param_1 + 0x70) = lVar9;
  thunk_FUN_01f51358((long *)(param_1 + 0x70),lVar9);
  lVar9 = *(long *)(param_1 + 0x78);
  if (lVar9 != 0) {
    uVar6 = (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
    ;
    *(undefined4 *)(param_1 + 0x88) = uVar6;
    FUN_035fd9d8(param_1,param_1 + 0x8e,0);
    return;
  }
LAB_0367b32c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


