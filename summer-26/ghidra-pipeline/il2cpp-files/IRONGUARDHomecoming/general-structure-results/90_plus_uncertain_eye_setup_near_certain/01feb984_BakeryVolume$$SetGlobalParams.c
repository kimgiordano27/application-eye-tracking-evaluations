/*
FUNCTION_NAME: BakeryVolume$$SetGlobalParams
ENTRY_POINT: 01feb984
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x01febcdc) */

void BakeryVolume__SetGlobalParams(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  
  puVar3 = Method_Unity_Collections_NativeArray<CommandBuilder_LineWidthData>__ctor__;
  puVar2 = Method_Unity_Collections_NativeArray<quaternion>_Dispose__;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((DAT_0482ee9e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<LightUtility_LightMeshVertex>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<LightUtility_LightMeshVertex>_Copy__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<quaternion>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<CommandBuilder_LineWidthData>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_0482ee9e = 1;
  }
  lVar5 = FUN_022c59ec(param_1,*(undefined8 *)puVar2);
  lVar6 = FUN_022c59ec(param_1,*(undefined8 *)puVar3);
  lVar12 = *(long *)puVar1;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar12);
  }
  uVar7 = FUN_04073094(lVar5,0,0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_04073094(lVar6,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if ((lVar6 != 0) && (lVar5 = FUN_0403144c(lVar6,0), lVar5 != 0)) {
      uVar11 = FUN_04031654(lVar5,0);
      *(undefined8 *)(param_1 + 0x30) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x30),uVar11);
      return;
    }
  }
  else if (lVar5 != 0) {
    uVar4 = FUN_04030344(lVar5,0);
    lVar6 = FUN_01f08890(*(undefined8 *)
                          Method_Unity_Collections_NativeArray<LightUtility_LightMeshVertex>__ctor__
                         ,uVar4);
    plVar14 = (long *)(param_1 + 0x30);
    *plVar14 = lVar6;
    thunk_FUN_01f51358(plVar14,lVar6);
    plVar8 = (long *)FUN_04030380(lVar5,0);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar1 = Method_Unity_Collections_NativeArray<LightUtility_LightMeshVertex>_Copy__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar15 = 0;
    do {
      lVar6 = *plVar8;
      lVar5 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar5) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01febb04;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar5,0);
LAB_01febb04:
      uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar7 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                           );
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 == 0) goto LAB_01febc10;
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_01febbf8;
      }
      lVar6 = *plVar8;
      lVar5 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar5) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_01febb64;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar5,1);
LAB_01febb64:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*plVar10 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      lVar5 = *plVar14;
      uVar11 = FUN_040305e8(plVar10,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar5 + (long)(int)uVar15 * 8 + 0x20) = uVar11;
      uVar15 = uVar15 + 1;
      thunk_FUN_01f51358();
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_01febbf8:
    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_01febc2c;
    }
  }
LAB_01febc10:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_01febc2c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


