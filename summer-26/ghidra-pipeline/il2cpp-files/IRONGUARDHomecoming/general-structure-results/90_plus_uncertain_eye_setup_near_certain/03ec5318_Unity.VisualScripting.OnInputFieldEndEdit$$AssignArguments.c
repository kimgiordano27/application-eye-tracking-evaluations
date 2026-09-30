/*
FUNCTION_NAME: Unity.VisualScripting.OnInputFieldEndEdit$$AssignArguments
ENTRY_POINT: 03ec5318
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ec55f0) */

void Unity_VisualScripting_OnInputFieldEndEdit__AssignArguments(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x20;
  long unaff_x23;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x23 + 0xc94) = 1;
  plVar5 = (long *)FUN_03ec5054();
  if (plVar5 == (long *)0x0) {
    thunk_FUN_01efb3a4(PTR_DAT_0457bc30);
    uVar8 = FUN_03406290();
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar9,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(PTR_DAT_0457bc38);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar8);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *unaff_x20;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)
           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
         ) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03ec5390;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03ec5390:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar4 = PTR_DAT_0457bc28;
  puVar3 = Method_UnityEngine_Camera_GetAllCameras__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar7;
    lVar10 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03ec5410;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_03ec5410:
    uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar12 & 1) == 0) break;
    lVar11 = *plVar7;
    lVar10 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_03ec5470;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,1);
LAB_03ec5470:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_03ec4ae4();
    lVar10 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_03ec54f0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar4,2);
LAB_03ec54f0:
    (*(code *)*puVar6)(plVar5,uVar8,uVar9,puVar6[1]);
  } while( true );
  plVar5 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)puVar1);
  if (plVar5 != (long *)0x0) {
    lVar11 = *plVar5;
    lVar10 = *(long *)puVar1;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03ec556c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar10,0);
LAB_03ec556c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


