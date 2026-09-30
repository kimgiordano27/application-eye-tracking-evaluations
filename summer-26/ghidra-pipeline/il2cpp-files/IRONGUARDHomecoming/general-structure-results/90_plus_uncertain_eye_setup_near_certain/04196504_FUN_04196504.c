/*
FUNCTION_NAME: FUN_04196504
ENTRY_POINT: 04196504
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0419679c) */
/* WARNING: Removing unreachable block (ram,0x041968f0) */

void FUN_04196504(float param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 local_58;
  
  if ((DAT_04840c7e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0458ddd0);
    thunk_FUN_01efb3a4(PTR_DAT_0458ddb8);
    thunk_FUN_01efb3a4(PTR_DAT_0458de60);
    DAT_04840c7e = 1;
  }
  local_58 = 0;
  if (((*(long *)(param_2 + 0x78) != 0) &&
      (lVar5 = *(long *)(*(long *)(param_2 + 0x78) + 0x20), lVar5 != 0)) &&
     (plVar6 = (long *)FUN_041a7930(lVar5,0), plVar6 != (long *)0x0)) {
    lVar5 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04196604;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                          ,0);
LAB_04196604:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar1 = (long *)(param_2 + 0x58);
    fVar13 = 0.0;
    do {
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04196684;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_04196684:
      uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_04196790;
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 == 0) goto LAB_04196768;
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_04196750;
      }
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_041966e0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_041966e0:
      lVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (*(long *)(param_2 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      fVar11 = (float)FUN_041a9d80(*(long *)(param_2 + 0x78),lVar5,0);
      fVar13 = fVar13 + fVar11;
      if ((param_1 < fVar13) && (*plVar1 == 0)) {
        *plVar1 = lVar5;
        thunk_FUN_01f51358(plVar1,lVar5);
      }
    } while( true );
  }
  goto LAB_041968e8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_04196750:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04196784;
    }
  }
LAB_04196768:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_04196784:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_04196790:
  puVar3 = PTR_DAT_0458ddd0;
  puVar2 = PTR_DAT_0458ddb8;
  if (*(char *)(param_2 + 0x39) != '\x01') {
    lVar5 = *(long *)(param_2 + 0x88);
    *(undefined1 *)(param_2 + 0x39) = 1;
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),param_2,*(undefined8 *)(lVar5 + 0x28));
    }
  }
  *(float *)(param_2 + 0x34) = param_1;
  uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_04194548();
  *(undefined8 *)(param_2 + 0x48) = uVar8;
  thunk_FUN_01f51358((undefined8 *)(param_2 + 0x48),uVar8);
  uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_0419468c();
  *(undefined8 *)(param_2 + 0x50) = uVar8;
  thunk_FUN_01f51358((undefined8 *)(param_2 + 0x50),uVar8);
  if (*(long *)(param_2 + 0x40) != 0) {
    local_58 = *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x378);
    FUN_04231a28(&local_58,*(undefined8 *)(param_2 + 0x48),0);
    if ((*(long *)(param_2 + 0x40) != 0) &&
       (((lVar5 = FUN_02452bb4(*(long *)(param_2 + 0x40),*(undefined8 *)PTR_DAT_0458de60),
         lVar5 != 0 && (lVar5 = FUN_04224d30(lVar5,0), lVar5 != 0)) ||
        (lVar5 = *(long *)(param_2 + 0x40), lVar5 != 0)))) {
      local_58 = *(undefined8 *)(lVar5 + 0x378);
      FUN_04231a28(&local_58,*(undefined8 *)(param_2 + 0x50),0);
      if (*(long *)(param_2 + 0x78) != 0) {
        uVar12 = FUN_041ab0a4(*(long *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x58),0);
        *(undefined4 *)(param_2 + 0x60) = uVar12;
        if (*(long *)(param_2 + 0x78) != 0) {
          uVar12 = FUN_041a9d80(*(long *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x58),0);
          *(undefined4 *)(param_2 + 100) = uVar12;
          FUN_041969b8(param_2);
          return;
        }
      }
    }
  }
LAB_041968e8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


